# cyberbat : Anomaly Detection Using Air Borne Sound

[ SAP Labs : Code with SAP Labs India ] Hackathon : Anomaly Detection Using Air Borne Sound

Refer the problem statement and other specifics here [SAP code](https://sap-code.hackerearth.com/challenges/hackathon/sap-code/custom-tab/anomaly-detection/#Anomaly%20Detection)

[MIMII Dataset: Sound Dataset](https://zenodo.org/record/3384388#.YD52cVkzbCJ) with the detailed explanation.

##Modeling Overview

The prediction system is the detection of anomalous sound of industrial machine in an unsupervised manner.
In the training phase only normal operation sounds are being considered and MFCC is used to feature extraction
and XGBoost is used to generate the machine learning model.

#### Wiring For Mono Mic

    - Mic 3V - Pi 3.3v
    - Mic Gnd - Pi Gnd
    - Mic SEL - Pi Gnd (this is used for channel selection. Connect to 3.3 or GND)
    - Mic BCLK - BCM 18 (pin 12)
    - Mic LRCL - BCM 19 (pin 35)
    - Mic DOUT - BCM 20 (pin 38)

![img](<https://github.com/harshas-repo/cyberbat/resources/System\ Architecture.png>)
![img](https://github.com/harshas-repo/cyberbat/resources/MFCC.png)
![img](<https://github.com/harshas-repo/cyberbat/resources/Machine\ Learning\ flowchart.png>)
![img](<https://github.com/harshas-repo/cyberbat/resources/System\ Flow\ chart.png>)
![img](<https://github.com/harshas-repo/cyberbat/resources/pi\ and\ mic.png>)
For balancing false alarm (False positive) and mixed event (False Negative) we are using f1 score for evaluation.
