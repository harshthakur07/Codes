function solution(s){
    let l = s.length;
    let c = s[l-1];
    let i = l-2;
    let isPalindrome = true;
    while(i>0){
        // console.log(i)
        if(c==s.charAt(i)){
            let anotherString = s.slice(i,l);
            // console.log(anotherString)
            let j=0,k=anotherString.length-1;
            while(j<=k){
                if(anotherString.charAt(j)==anotherString.charAt(k)){
                    j++;k--;
                } else {
                    isPalindrome = false;
                    break;
                }
            }
         if(!isPalindrome || j>k) { break;}
        } else i--;
    }
    // console.log(isPalindrome)
    if(!isPalindrome) i = l-1;
    i--;
    let ans = s;
    for(;i>=0;i--){
        ans += s[i];
    }
    return ans;
}

function execute(){
    let str = 'harsxhs';
    let ans = solution(str);
    console.log(ans);
}

execute();