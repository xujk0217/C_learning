
int moneyPerm(int K){
  if(K == 0 || K == 1){
    return 1;
  }
  if(K < 0){
    return 0;
  }
  return moneyPerm(K-1) +moneyPerm(K-5)+ moneyPerm(K-10);
} 