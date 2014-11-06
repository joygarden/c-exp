//
//  main.c
//  c-exp
//
//  Created by liaozhisong on 10/31/14.
//  Copyright (c) 2014 liaozhisong. All rights reserved.
//

#include <stdio.h>

int printExp() {
    printf("Hello, World!\n");
    
    int score = 23;
    char c = 'b';
    
    printf("%d \n",score);
    {
        //c作用域止于大括号
        char c = 'a';
        printf("%d \n",c);
    }

    double d = 1.88;
    
    //3位小数
    printf("%.3f \n",d);
    
    printf("%d %f %c %d \n",score,d,c,c);
    
    //控制位数3，不够补0
    printf("%03d \n",score);
    
    return 0;
}


int main(int argc, const char * argv[]) {
    //方法定义要写在调用之前，c99规范
    printExp();
    return 0;
}

