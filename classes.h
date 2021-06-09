#pragma once
struct Node
{
private: int coorX, coorY, id; 
       //int mark = 10000;
         //bool check;

public:
    int mark = 10000;
    bool check = false;
    Node();
    Node(int cX, int cY, int id);
    int getX();
    int getY();
    //int getMark();
    int getID();
    int getMark();
    void setMark(int m);
    // bool getCheck();
     //void setCheck(bool ch);
     //void setMark(int mark);
     // Node(Node &c); 

};

struct Line
{
    private: int startNode, lastNode, weight;

    public:

    Line();
    Line(int stNode, int ltNode, int wt);
    int getStNode();
    int getLtNode();
    int getWt();
    
};