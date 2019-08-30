#include <iostream>

using namespace std;

int main()
{
    int R;
    cin>>R;

    char map1[R][R];

    for(int i=0;i<=R;i++)
    {
        for(int j=0;j<=R;j++)
        {
            map1[i][j]='+';
        }
    }

    int x=0;
    int y=R;
    int h=1-R;
    map1[0][10]='.';

    cout<<h<<" "<<x<<" "<<y<<endl;
    while(y>x)
    {
        if(h>=0)
        {
            h=h+2*(x-y)+5;
            y--;
        }
        else
        {
            h=h+2*(x)+3;
        }
        x++;
        map1[x][y]='.';
        cout<<h<<" "<<x<<" "<<y<<endl;
    }

    for(int i=R;i>=0;i--)
    {
        for(int j=0;j<=R;j++)
        {
            cout<<map1[j][i]<<" ";
        }
        cout<<endl;
    }
}
