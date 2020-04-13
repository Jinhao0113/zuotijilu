#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0;
    printf("新建类型:(OJ(1)或PROB（2)");
    scanf("%d",&x);
    if(x!=1&&x!=2){printf("错误退出.");return 0;}
    else if(x==1)
    {
        string s;
        printf("OJ网址(不带https://或http://,退出输入(EXIT))");
        getline(cin,s);
        if(s=="EXIT")return 0;
        string CMD="mkdir ";
        CMD=CMD+s;
        system(CMD.c_str());
        CMD="./"+s+"/index.md";
        FILE*INDEX=fopen(CMD.c_str(),"w");
        fprintf(INDEX,"### 简介 \n\n 这是我的[]()做题记录");
        fclose(INDEX);
    }
    else if(x==2)
    {

    }
    return 0;
}