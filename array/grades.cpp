int main(){
    vector<int> result;
    for(int i = 0; i<grades.size(); i++){

        if(grades[i]<40){
            result.push_back(grades[i]);
        }else if(grades[i]/5==0){
            result.push_back(grades[i]);
        }else if((grades[i]+1)/5 ==0){
            result.push_back(grades[i]+1);
        } else{
            result.push_back( grades[i]+2);
        }
    }
    return result ;
}