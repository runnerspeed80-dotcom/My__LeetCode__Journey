int com(const void *a ,const void *b){
    return (*(int*)a - *(int*)b);
}

int heightChecker(int* heights, int heightsSize) {

    int expected[heightsSize];
    for(int i = 0; i <heightsSize ; i++){
        expected[i]=heights[i];
    }  
    int total = 0;

    qsort(expected , heightsSize , sizeof(int) , com);

    for(int i = 0; i <heightsSize ; i++){
        if(heights[i] != expected[i]){
            total +=1;
        }    
        
    }
    return total;    
}