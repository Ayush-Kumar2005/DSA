def naive_matcher(text,pattern):
    n=len(text)
    m=len(pattern)
    found_indices=[]
    if n==0 or m==0 or n<m :
        return found_indices
    
    for i in range(n-m+1):
        isMatch = True
        for i in range(m):
            if text[i+j]!=pattern[j]:
                isMatch=False

        if isMatch==True:
            found_indices.append(i)
            
    return found_indices


text="they are aware about fair and square"
pattern="are"
print(naive_matcher(text,pattern))