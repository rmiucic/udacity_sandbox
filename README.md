# udacity_sandbox
# Bicycle Model
if yaw rate is zero
<img src="https://latex.codecogs.com/gif.latex?\dot{\Theta}=0" title="\dot{\Theta}=0" /> then <br>
<img src="https://latex.codecogs.com/gif.latex?x_{f}=x_{0}&plus;v*dt*cos(\Theta_{0})" title="x_{f}=x_{0}+v*dt*cos(\Theta_{0})" /><br>
<img src="https://latex.codecogs.com/gif.latex?y_{f}=y_{0}&plus;v*dt*sin(\Theta_{0})" title="y_{f}=y_{0}+v*dt*sin(\Theta_{0})" /><br>
<img src="https://latex.codecogs.com/gif.latex?\Theta_{f}=\Theta_{0}" title="\Theta_{f}=\Theta_{0}" /><br>
<br>
Otherwise if yaw rate is not zero 
<img src="https://latex.codecogs.com/gif.latex?\Theta_{f}\neq&space;=\Theta_{0}" title="\Theta_{f}\neq =\Theta_{0}" /> then <br>
<img src="https://latex.codecogs.com/gif.latex?x_{f}=x_{0}&plus;\frac{v}{\dot{\Theta}}*\left&space;[&space;sin(\Theta_{0}&plus;\dot{\Theta}*dt)&space;-sin(\Theta_{0})\right&space;]" title="x_{f}=x_{0}+\frac{v}{\dot{\Theta}}*\left [ sin(\Theta_{0}+\dot{\Theta}*dt) -sin(\Theta_{0})\right ]" /> <br>
<img src="https://latex.codecogs.com/gif.latex?y_{f}=y_{0}&plus;\frac{v}{\dot{\Theta}}*\left&space;[&space;cos(\Theta_{0})&space;-cos(\Theta_{0}&plus;\dot{\Theta}*dt)&space;\right&space;]" title="y_{f}=y_{0}+\frac{v}{\dot{\Theta}}*\left [ cos(\Theta_{0}) -cos(\Theta_{0}+\dot{\Theta}*dt) \right ]" /> <br>
<img src="https://latex.codecogs.com/gif.latex?\Theta_{f}=\Theta_{0}&plus;\dot{\Theta}*dt" title="\Theta_{f}=\Theta_{0}+\dot{\Theta}*dt" /> <br>
where<br>
<img src="https://latex.codecogs.com/gif.latex?\Theta_{f}" title="\Theta_{f}" /> --> is final Yaw angle<br>
<img src="https://latex.codecogs.com/gif.latex?x_{f}" title="x_{f}" /> --> is final x position<br>
<img src="https://latex.codecogs.com/gif.latex?y_{f}" title="y_{f}" /> --> is final y position<br>
<img src="https://latex.codecogs.com/gif.latex?\dot{\Theta}" title="\dot{\Theta}" /> --> is yaw rate <br>
<img src="https://latex.codecogs.com/gif.latex?x_{0}" title="x_{0}" /> --> is initial x position<br>
<img src="https://latex.codecogs.com/gif.latex?y_{0}" title="y_{0}" /> --> is initial y position<br>
<img src="https://latex.codecogs.com/gif.latex?\Theta_{0}" title="\Theta_{0}" /> --> is initial Yaw angle<br>
<img src="https://latex.codecogs.com/gif.latex?dt" title="dt" /> --> is delta time<br> 
https://www.codecogs.com/latex/eqneditor.php

