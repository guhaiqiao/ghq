#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define maxn 1010
using namespace std;
int compare(int a[], int la, int b[], int lb)
{
    if(la>lb)
        return 1;
    if(la<lb)return -1;
    for(int i=la-1;i>=0;--i){
        if(a[i]&&!b[i])return 1;
        else if(!a[i]&&b[i])return -1;
    }
    return 0;
}
int main(){
    int f[maxn],g[maxn],h[maxn],s[2*maxn];
    int lf,lg,lh,ls;
    int n,i,j;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&lf);
        for(i=lf-1;i>=0;--i)scanf("%d",&f[i]);
        scanf("%d",&lg);
        for(i=lg-1;i>=0;--i)scanf("%d",&g[i]);
        scanf("%d",&lh);
        for(i=lh-1;i>=0;--i)scanf("%d",&h[i]);
        ls=lf+lg-1;
        for(i=0;i<ls;++i)s[i]=0;
        for(i=0;i<lf;++i){
            for(j=0;j<lg;++j){
                s[i+j]^=(f[i]&g[j]);
            }
        }
        while(compare(s,ls,h,lh)>=0){
            int d=ls-lh;
            for(i=0;i<lh;++i){
                s[i+d]^=h[i];
            }
            while(ls&&!s[ls-1]){
                --ls;
            }
        }
        if(ls==0)ls=1;
        cout<<ls<<' ';
        for(i=ls-1;i>0;--i){
            cout<<s[i]<<' ';
        }
        cout<<s[0]<<'\12';
    }
    return 0;
}