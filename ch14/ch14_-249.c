#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct employee {
  int id;
  char first_name[32];
  char last_name[32];
  int boss_id;
}em;

int main(){
    int n;
    scanf("%d", &n);
    em p[32];
    for(int i = 0 ; i < n; i++){
        scanf("%d%s%s%d", &p[i].id, p[i].first_name, p[i].last_name, &p[i].boss_id);
    }
    int m;
    char fn1, ln1, fn2, ln2;
    scanf("%d", &m);
    
}