int posIdx = 0;
    int negIdx = 0;
    for(int i=0;i<(pos.size()+neg.size()-1);i++){
        if(i%2==0){
            v[i] = pos[posIdx];
            posIdx++;
        }
        else{
            v[i] = neg[negIdx];
            negIdx++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << "  ";
    }