function reduce(s){
    let l = s.length;
    let i=0; let count = 0;
    while(i<l){
        if(s.charCodeAt(i)-s.charCodeAt(i+1)==1 || s.charCodeAt(i)-s.charCodeAt(i+1)==-1){
            i++; count++;
        }
        else if(count!=0) break; else i++;
        
    }
    if(count!=0){
        let front = s.slice(0,i-count);
        // console.log(front);
        let end = s.slice(i+1,l);
        // console.log(end)
        s = front+end
        s = reduce(s)
    }
    return s;
}
function execute(){
    
    let str = "dsfhaxybcd";
    let ans = reduce(str);
    console.log(ans);
}

execute();