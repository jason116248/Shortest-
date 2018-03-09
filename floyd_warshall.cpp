#include <iostream>

using namespace std;

int main()
{
   int  distance[4][4] = {{0,3,6,15},{10000,0,-2,10000},{10000,10000,0,2},{1,10000,10000,0}};
   int path[4][4]={{-1,0,0,0},{-1,-1,1,-1},{-1,-1,-1,2},{3,-1,-1,-1}};
   
   for(int k=0;k<4;k++)
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            if(distance[i][j] > distance[i][k] + distance[k][j])
            {
                distance[i][j] = distance[i][k] + distance[k][j];
                path[i][j] = path[k][j];
            }
        }
    
    for(int r=0;r<4;r++){
        
        for(int c=0; c<4;c++)
        {
            cout << distance[r][c] << "  ";
        }
        cout << endl;
    }    
   return 0;
}
