)
void rev(queue<int> &q){
    for(int i = 0 ; i < q.size()/2 ; i++) {
        swap(q.back(),q.front());
    }
    print(q);
}