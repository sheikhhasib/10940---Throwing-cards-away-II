#include<stdio.h>
#include<math.h>
int main(){
    int n,i,cnt,ans;
    while(scanf("%d",&n)==1 && n!=0){
        i=1;
        while(i<=n){
            i= i*2;
        }
        cnt = i%n;
        ans = n-cnt;
        printf("%d\n",ans);
    }
    return  0;
}
