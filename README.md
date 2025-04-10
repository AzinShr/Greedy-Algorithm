 Greedy Algorithm – Cash Problem
This project solves the classic Cash Change Problem using a greedy algorithm. The goal is simple: given a target amount and a set of coin denominations, we find the minimum number of coins needed to make the exact change.

⚙️ How It Works
The greedy approach grabs the largest possible coin first, then moves down to smaller denominations until the total is met. It’s fast and efficient — but only works correctly when the coin system is canonical (like US or Euro coins). For non-standard systems, greedy might fail to find the optimal solution.

📌 Example
text
Copy
Edit
Target: 63
Coins: [25, 10, 5, 1]

Greedy Solution:
25 + 25 + 10 + 1 + 1 + 1 = 63
Total Coins: 6

💡 Why Greedy?
Greedy algorithms make local optimal choices hoping they lead to a global optimum. In the cash problem, it’s perfect for speed and simplicity — just not always perfect for all coin systems.# Greedy-Algorithm
