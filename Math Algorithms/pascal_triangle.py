class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l=[]
        l.append([1])
        if(numRows==1):
            return l
        for i in range(1,numRows):
            l1=[1]
            for j in range(1,i):
                k = l[i-1][j-1] + l[i-1][j]
                l1.append(k)
            l1.append(1)
            l.append(l1)
        return l




    
            

        