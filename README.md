# C++ in Quantitative Finance part #1

Submitted by: Zimin Luo `417124`

## Objective 

The objective of this project is to use Monte Carlo simulations to approximate the price of the up-and-out put option with barrier. 

Specifically, the following items are analyzed:
* the therectical price of this option 
* relation between the theorectial price of the option and TBA

## Characteristics of the Option 

Up-and-out option is the option that starts at a price that's lower than the barrier price and terminates whenever the option price reaches the barrier price or maturity. Due to the inclusion of the barrier, the European option becomes path-dependent, hence the entire path needs to be generated. 

The payoff of a **PUT UP-AND-OUT** barrier option is:

$$
\Phi_t = \max(X - S_T, 0)\quad \textsf{if}\quad \max_{0 \leq t\leq T}(S_t) \leq L
$$

where:
- $\Phi_t$ is the payoff at time $t$
- $X$ is the strike price 
- $S_T$ is the price at maturity 
- $T$ is time to maturity
- $L$ is the barrier 

The following assumptions are made:

- prices of the underlying instrument follow the log-normal distribution
- distribution parameters $\mu$ and $\sigma$ are constant,
- no transaction costs and no taxes,
- it is possible to purchase or sell any amount of stock or options or their fractions at any given time
- underlying instrument does not pay dividend
- risk-free arbitrage is not possible
- trading is continuous
- traders can borrow and invest their capital at the risk-free interest rate
- risk-free interest rate $r$ is constant

### Parameters
- price of the underlying at the moment of option pricing: $S_0 = 145$
- strike price: $K = 150$
- annualized voltality rate: $\sigma = 25\%$
- annualized risk-free rate: $r = 5\%$
- time to maturity: $t = 1$ (one year)
- barrier: $b = ?$


## Code

### File Structure

There are total five `cpp` files in the directory: 

1. `myMonteCarloProject.cpp`: contains the main function 
2. `myEuroOptionBarrier.cpp`: contains the 
3. `myEuroOptionBarrier.h`: the header file for `myEuroOptionBarrier.cpp`
4. `Random1.cpp`: generates a random value from normal distribution via Box Muller approach 
5. `Random1.h`: the header file for `Random1.h`

### Code

```c++

```

## Results $

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
- [ ] Honor code

## TODO 
- [x] `myMonteCarloProject.cpp`: contains the main file
- [x] `myEuroOptionBarrier.cpp`: contains the 
- [x] `myEuroOptionBarrier.h`: header file for `myEuroOptionBarrier.cpp`
- [x] `Random1.cpp`: generates a random value from normal distribution via Box Muller approach 
- [x] `Random1.h`: the header file for `Random1.h`
- [ ] Bonus: `standardDeviation` function
- [ ] add comments 
