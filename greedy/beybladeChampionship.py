''' Read input from STDIN. Print your output to STDOUT '''
    #Use input() to read input from STDIN and use print to write your output to STDOUT

def main():
    T =int(input())
    for i in range(T):
        N = int(input())
        grev = list(map(int,input().split()))
        opp = list(map(int,input().split()))
        grev.sort()
        opp.sort()
        res =0
        for i in grev:
            for j in opp:
                if i>j:
                    res +=1
                    opp.remove(j)
                    break
        print(res)
                
            
                



 # Write code here 

main()

