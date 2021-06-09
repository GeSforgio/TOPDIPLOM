#include "classes.h"

using namespace std;



Node::Node() {
    coorX = 0;
    coorY = 0;
    //mark = 10000;
    id = 0;
    //check = false;
}

Node::Node(int cX, int cY, int id) {
    coorX = cX;
    coorY = cY;
    //this->mark = mark;
    this->id = id;
    //check = ch;
}

int Node::getX() {
    return coorX;
}

int Node::getY() {
    return coorY;
}

// int Node::getMark(){
//     return mark;
// }

int Node::getID() {
    return id;
}


void Node::setMark(int m)
{
    this->mark = m;
}

int Node::getMark() {
    return mark;
}
// bool Node::getCheck(){
//     return check;
// }

// void Node::setCheck(bool ch){
//     check = ch;
// }

// void Node::setMark(int mark){
//     this->mark = mark;
// }




Line::Line() {
    startNode = 0;
    lastNode = 0;
    weight = 0;
}
Line::Line(int stNode, int ltNode, int wt) {
    startNode = stNode;
    lastNode = ltNode;
    weight = wt;
}

int Line::getStNode() {
    return startNode;
}

int Line::getLtNode() {
    return lastNode;
}

int Line::getWt() {
    return weight;
}
