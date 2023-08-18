class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int d1 =0,d2=0;

        if(start>destination){
            int temp = start;
            start = destination;
            destination = temp;
        }

        for(int i=start;i<destination;i++){
            d1+=distance[i];
        }

        int left = start-1;
        int right = distance.size() - destination + start;

        while(right>0){
            if(left<0){
                d2+=distance[distance.size()+left];
            }
            else{
                d2+=distance[left];
            }
            left--;
            right--;
        }

        if(d1<d2){
            return d1;
        }
        return d2;
    }
};