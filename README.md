# C++ in Quantitative Finance I 

## Project Objective 
- Approximate the theorectical price of **the up-and-out** PUT  option with a barrier active between the moment of pricing and the option expiry. 

## Characteristics 
- PUT option: $\texttt{Payoff} = \max[X - S_T, 0]$
- UP and OUT: $\texttt{Payoff} = 0 if S_t > b$
- Barrier: the inclusion of barrier makes the European option a path dependent problem.

## Assumptions 
- prices of the underlying instrument follow the log-normal distribution
- distribution parameters $\mu$ and $\sigma$ are constant,
- no transaction costs and no taxes,
- it is possible to purchase or sell any amount of stock or options or their fractions at any given time
- underlying instrument does not pay dividend
- risk-free arbitrage is not possible
- trading is continuous
- traders can borrow and invest their capital at the risk-free interest rate
- risk-free interest rate $r$ is constant

## Parameters 
- price of the underlying at the moment of option pricing: $S_0 = 145$
- strike price: $K = 150$
- annualized voltality rate: $\sigma = 25\%$
- annualized risk-free rate: $r = 5\%$
- time to maturity: $ t = 1$ year
- barrier: $b = ?$

## Checklist
- [ ] a zip file with `*.cpp` and `*.h` files only
- [ ] a pdf file with a short report (2 - 6 pages)
    - [ ] objective of the project
    - [ ] assumptions 
    - [ ] description of the option to be priced and its characteristics 
    - [ ] description and explanation of code elements
    - [ ] information about the results of the simulation, i.e. approximation of the theorectial price of your option 
    - [ ] calculations of standard deviation of theorectical price approximations will be given extra points 
- [ ] `your_surname.zip` and `your_surname.pdf`

