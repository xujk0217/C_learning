void convert(int a[3][3], int b[3][3]){  
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            b[i][j] = a[j][i];
        }
    }
}