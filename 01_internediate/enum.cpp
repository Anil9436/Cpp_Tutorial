#include<iostream>
// namespace pets{enum Pet
// {
//     cat,
//     dog,
//     pig,
//     whale,
// };
// }

// namespace names{ enum Name{
// cat,
//     dog,
//     pig,
//     whale,
//     anil,
// };
// }
// // enum Color
// // {
// //     black,
// //     red,
// //     blue,
// // };

// enum Status{
//     SUCCESS,
//     FAIL ,
// };

// int main()
// {
//     std::cout<<FAIL<<std::endl;
//     std::cout<<names::anil<<std::endl;
//     return SUCCESS;
// }

// ==========================  ENUM QUIZ ========================

enum MonsterEQ{
    orc = -1,
    goblin,
    troll,
    ogre,
    skeleton,
};

int main(){
    MonsterEQ M{troll};
    std::cout<<M<<std::endl;
}
