string Solution::solve(string A) {

   string a = A;

    auto ans = next_permutation(a.begin(),a.end());

    if(ans) return a;

    else return string("-1");

}
