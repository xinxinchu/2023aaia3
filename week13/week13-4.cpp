//Playground
int main() {
    vector<int> A, B; // 2�Ӱ}�C
    int a,b; //2�Ӽ�

    while(cin >> a >> b) //step01:Input
    {
        A.push_back(a); // ���}�C
        B.push_back(b);
    }
    sort(A.begin(), A.end()); //step04: sort �p��j�Ʀn
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++) //step03 Output
    {
        cout << A[i] << " ";
        ans += abs(A[i] - B[i]);
    }
    cout << "���׬O:"<< ans;

}
