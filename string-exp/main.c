//
//  main.c
//  string-exp
//
//  Created by liaozhisong on 11/5/14.
//  Copyright (c) 2014 liaozhisong. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//计算字符串长度
unsigned long myLen(char a[]) {
    unsigned long length = -1;
    while (a[++length]);//'\0' 为字符串结尾，是假
    return length;
}

//字符串拼接
void strCatExp() {
    char m[10] = "abcd";
    char n[] = "efghi";
    strcat(m, n); //m的长度必须能容纳下m+n的长度
    printf("m=%s\n",m);
    
    char x[8] = "abcd";
    char y[] = "efghi";
    unsigned long length = sizeof(x)/sizeof(char)-strlen(x)-1; //计算字符串可用剩余长度
    strncat(x, y, length); //指定拼接长度
    printf("x=%s\n",x);
}

//字符串拷贝
void strCopyExp() {
    char a[10] = "abcd";
    char b[] = "efghi";
    strcpy(a, b);
    printf("a=%s\n",a);
    
    //指定拷贝长度
    char x[] = "abcd";
    char y[] = "efghi";
    unsigned long length = strlen(x);
    strncpy(x, y, length);
    printf("x=%s\n",x);
}

//字符串比较
void strCmpExp() {
    char x[] = "abcd";
    char y[] = "efghi";
    int result = strcmp(x, y);
    printf("result=%d\n",result);
}

int main(int argc, const char * argv[]) {
    char b[] = "afe我";
    char a[] = {'a','b','c'};
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(b));
    printf("%s\n",a);  //会读取不属于自己空间，读了b的内容
    printf("b=%lu\n",strlen(b));
    printf("a=%lu\n",strlen(a));
    printf("b=%lu\n",myLen(b));
    printf("a=%lu\n",myLen(a));
    
    char c[] = "ff\0c";
    printf("%lu\n",strlen(c));
    char d[] = "ab\0121"; //\会转义之后的所有数字
    printf("%lu\n",strlen(d));
    
    strCatExp();
    
    strCopyExp();
    
    strCmpExp();
  }