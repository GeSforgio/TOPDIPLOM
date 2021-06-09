#include "algo.h"
using namespace std;

void algo(int start,int last,char* p)
{
    for (int i=0; i < 8;i++)
    {
        p[i] = 0;
    }
    const int num_nodes = 7;
const int num_lines = 12;
Node nodes[num_nodes];
Line lines[num_lines];
Node first(5, 0, 1);
Node second(15, 0, 2);
Node third(30, 0, 3);
Node fourth(45, 0, 4);
Node fifth(60, 0, 5);
Node sixth(30, 0, 6);
Node seventh(30, 0, 7);
Line f(1, 2, 6);
Line s(2, 3, 3);
Line t(3, 4, 17);
Line fo(3, 5, 15);
Line fi(5, 6, 3);
Line se(5, 7, 1);

Line f1(2, 1, 6);
Line s1(3, 2, 3);
Line t1(4, 3, 17);
Line fo1(5, 3, 15);
Line fi1(6, 5, 3);
Line se1(7, 5, 1);

nodes[0] = first;
    nodes[1] = second;
    nodes[2] = third;
    nodes[3] = fourth;
    nodes[4] = fifth;
    nodes[5] = sixth;
    nodes[6] = seventh;
    lines[0] = f;
    lines[1] = s;
    lines[2] = t;
    lines[3] = fo;
    lines[4] = fi;
    lines[5] = se;
    lines[6] = f1;
    lines[7] = s1;
    lines[8] = t1;
    lines[9] = fo1;
    lines[10] = fi1;
    lines[11] = se1;



    int startN = start-1;
    nodes[start - 1].mark = 0;
    int lastN = last-1;
    int min, minindex,temp;
    int count;
    //startN.getInfo();

    do {
        minindex = 10000;
        min = 10000;
        for (int i = 0; i < num_nodes; i++)
        {
            if ((nodes[i].check == false) && (nodes[i].mark < min))
            {
                min = nodes[i].mark;
                minindex = nodes[i].getID();
            }

        }
        if (minindex != 10000)
        {

           // for (int i = 0; i < num_nodes; i++)
           // {
                for (int j = 0; j < num_lines; j++)
                {
                    if ((lines[j].getStNode() == minindex))// || (lines[j].getLtNode() == nodes[i].getID())))
                    {
                        temp = min + lines[j].getWt();
                        if (temp < nodes[lines[j].getLtNode()-1].mark)
                        {
                            nodes[lines[j].getLtNode()-1].mark = temp;
                        }

                    }
                }
                nodes[minindex-1].check = true;
                
           // }


        }

    } while (minindex < 10000);
     p[0]= lastN+1;
     int k =1;
    int weight = nodes[lastN].mark;
    while (lastN != startN) {
        for (int i = 0; i < num_lines; i++)
        {
            if ((lines[i].getLtNode() == lastN+1))
            {
                int tmp = weight - lines[i].getWt();
                if (tmp == nodes[lines[i].getStNode()-1].mark)
                {
                    weight = tmp;
                    lastN = lines[i].getStNode() - 1;
                    p[k]= lines[i].getStNode();
                    k++;
                    break;
                    
                    
                }
            }

        }
    }

};