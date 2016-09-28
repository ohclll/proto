#include <iostream>
#include <fstream>

#include "people.pb.h"

using namespace std;

void listpeople(const learn::Person p) {
    cout << p.name() << endl;
    cout << p.age() << endl;
    cout << p.likenum_size() << endl;
}

int main() {
    learn::Person p1;
    p1.set_name("lichao");
    p1.set_age(36);
    p1.add_likenum(2);
    p1.add_likenum(4);
//    p1.set_likenum(0,9);
//    p1.set_likenum(1,17);

    string file = "/home/lllcho/ClionProjects/proto/t.model";
    fstream fout(file, ios::out | ios::binary);
    if (!p1.SerializeToOstream(&fout)) {
        cout << "Failed to write." << endl;
        return -1;
    }
    fout.close();

    fstream fin(file, ios::in | ios::binary);
    learn::Person p2;
    if (!p2.ParseFromIstream(&fin)) {
        cerr << "Failed to read.";
        return -1;
    }
    listpeople(p2);
    return 0;
}