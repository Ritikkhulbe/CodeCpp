#include <bits/stdc++.h>

using namespace std;
vector<vector<int> > sequences;

void con(int f, int e, int a, int b){
    int startingFloorIndex = -1;
    for (int i=0;i<e;i++){
        vector<int> sequence;
        int skips,ffloor;
        cin>>skips>>ffloor;
        if(ffloor == a) startingFloorIndex = sequences.size();
        sequence.push_back(ffloor);
        
        for (int j = 1;j<f;j++){
            ffloor=ffloor+skips;
            if (ffloor<f){
                if(ffloor == a) startingFloorIndex = sequences.size();
                sequence.push_back(ffloor);
            }
        }
        sequences.push_back(sequence);
    }
    
    for (int i = 0; i < sequences.size(); i++) {
        for (int j = 0; j < sequences[i].size(); j++) {
            cout << sequences[i][j] << " ";
        }
        cout << endl;
    }
    
    
    vector<int> current = sequences[startingFloorIndex];
    // Start from the index that contains starting floor
    for (int i = 0; i < sequences.size(); i++) {
        // Search the current sequence for destinaton floor
        for(int z = 0; z < current.size(); z++) {
            if(current[z] == b) {
                cout << "It is possible to move the furniture." << endl;
                return;
            }
        }
    }
    
//     // Remove the current sequence from list of indexes
//     sequences.erase(sequences.begin() - startingFloorIndex);
//     while(sequences.size() > 0) {
//         for (int i = 0; i < current.size(); i++) {
//             int toFind = current[i];
//             for (int j = 0; j < sequences.size(); j++) {
//                 vector<int> sequence = sequences[j];
//                 for (int k = 0; k < sequence.size(); k++) {
//                     if (sequence[k] == toFind) {
//                         current = sequence;
//                         sequences.erase(sequences.begin() - j);
                        
//                     }
//                 }
//             }
//         }
//     }
    
    
}
int main(){
    int tc;
    cin>>tc;
    for (int i=0;i<tc;i++){
        int f,e,a,b;
        cin>>f>>e>>a>>b;
        con(f,e,a,b);
    }
}