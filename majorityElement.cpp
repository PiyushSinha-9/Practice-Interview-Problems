int majorityElement(int a[], int size)
{
    
    // your code here
    
    if(size == 0){
        return -1;
    }
    
    if(size == 1){
        return a[0];
    }
    
    int tempME=a[0], counter=1;
    
    for(int i=1 ; i<size ; ++i){
        if(a[i]==tempME){
            counter++;
        }else{
            counter-=1;
            if(counter == 0){
                tempME = a[i];
                counter=1;
            }
        }
    }
    
    int MEFreq=0;
    for(int i=0;i<size;i++){
        if(a[i]== tempME){
            MEFreq+=1;
        }
    }
    
    if(MEFreq > size/2){
        return tempME;
    }else{
        return -1;
    }
}