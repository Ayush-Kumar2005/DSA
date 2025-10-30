def fractional_Knapsack(weights,profits,capacity,n):
    ratio =[]
    for i in range(n):
        ratio.append(profits[i]/weights[i])

    for i in range(n):
        for j in range(i+1,n):
            if ratio[i]<ratio[j]:
                ratio[i],ratio[j]=ratio[j],ratio[i]
                weights[i],weights[j]=weights[j],weights[i]
                profits[i],profits[j]=profits[j],profits[i]

    total_profit=0.0

    for i in range(n):
        if capacity>=weights[i]:
            capacity-=weights[i]
            total_profit+=profits[i]
        else:
            fraction=capacity/weights[i]
            total_profit+=fraction*profits[i]
            break
    
    return total_profit



n=int(input("Enter number of parcels"))
weights=[]
profits=[]
for i in range(n):
    w=int(input("Enter weight of parcel {i+1}:"))
    p=int(input("Enter profit of parcel {i+1}:"))
    weights.append(w)
    profits.append(p)

capacity=int(input("Enter capacity: "))
maxProfit=fractional_Knapsack(weights,profits,capacity,n)
print("Maximum profit: ",maxProfit)