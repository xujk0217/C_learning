#include<stdio.h>

int main(){
    double a, b;
    while(1){
        scanf("%lf %lf", &a, &b);
        if(a == 0 && b == 0){
            break;
        }else{
            if(a>b){
                double tem = a;
                a = b;
                b = tem;
            }
            int sumplace[10000];
            double times = 0;
            for(double i = a; i <= b; i++){
                double sum = 1;
                for(double j = 1; j <= i; j++){
                    sum *= j;
                }
                //printf("times:%d, sum:%d\n", i, sum);
                sumplace[(int)times] = sum;
                times+=1;
            }

            int modTenNum[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
            for(double i = 0; i <= b-a ; i++){
                int tens = 0;
                int isAlreaExist = 0;
                while(sumplace[(int)i]%10 == 0){
                    sumplace[(int)i]/=10;
                    tens+=1;
                }
                //printf("times:%d, tens:%d\n", i, tens);
                //printf("modTen[0]: %d, modTen[1]: %d\n", modTenNum[0], modTenNum[1]);
                for(int k = 0; k<10; k++){
                    if(modTenNum[k] == tens){
                        isAlreaExist = 7;
                        //printf("k = %d, mostennum = %d,rept!!\n", k, modTenNum[k]);
                        break;
                    }
                }
                if(isAlreaExist == 0){
                    for(int k = 0; k<10; k++){
                        if(modTenNum[k] == -1){
                            modTenNum[k] =tens;
                            //printf("tens save!\n");
                            break;
                        }
                    }
                }
            }
            int time = 0;
            for(int i = 0; i < 10; i++){
                if(modTenNum[i]==-1){
                    break;
                }else{
                    time+=1;
                }
            }
            printf("%d\n", time);
        }
    }
}