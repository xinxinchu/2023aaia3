//Playground
int main() {
    vector<int> A, B; // 2個陣列
    int a,b; //2個數

    while(cin >> a >> b) //step01:Input
    {
        A.push_back(a); // 放到陣列
        B.push_back(b);
    }
    sort(A.begin(), A.end()); //step04: sort 小到大排好
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++) //step03 Output
    {
        cout << A[i] << " ";
        ans += abs(A[i] - B[i]);
    }
    cout << "答案是:"<< ans;

}
