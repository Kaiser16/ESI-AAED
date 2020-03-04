#include<iostream>
#include<algorithm>

void printvec(int *v,int *vf)
{
    int i = 0;
    while((v+i)!=vf) {std::cout<<*(v+i)<<" ";++i;}
    std::cout<<std::endl;
}

int main()
{
    int n=20;
    int v[n];
    int v_aux[n];
    for(int i = 0;i < n;++i) v[i] = i;
    memcpy(v_aux,v,sizeof(v));
    for(int i = 0;i < 10;++i)
    {
        do
        {
            memcpy(v_aux,v,sizeof(v));
            printvec(v_aux,v_aux+i);
        }
        while(std::next_permutation(v,v+n));
    }
    return 0;
}