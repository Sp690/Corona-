# Corona-
According to the latest guidelinn on the diagnosis and treatment of the novel coronavirus released by the National Health Commission, the virus is sensitive to ultraviolet light and heat, so ultraviolet radiation can effectively eliminate the virus.  The problem with ultraviolet light is that it irritates the skin and increases the chances of getting skin cancer.Precisely for this reason, through an Arduino Nano and some sensors and transducers, we can create a PCB capable of controlling a UV lamp to cause it to kill the virus without, however, turning it on with ourselves in the vicinity. In this way we will protect our skin.  Photomedicine expert explains why UV light is effective in sterilizing surfaces and objects  To prevent the spread of SARS-CoV-2, the new coronavirus, several measures of hygiene, containment, social distance and mandatory use of masks were taken. Hygiene procedures were intensified and the use of alcohol-based liquid disinfectants became one of the methods against the 6 oldest types of coronavirus. Therefore, concerns about how to protect and disinfect clothes, objects and environments in a correct and effective way have gained importance and the use of ultraviolet radiation has appeared as a good option. Heat or thermal disinfection has been shown to be quite efficient, since at temperatures between 60 ° and 80 ° degrees the virus does not survive. Radiation cleaning, especially ultraviolet (UV) radiation, it is a well-known approach and already widely used in medicine to inactivate all microorganisms and viruses, as light offers some advantages over liquid disinfectants and can be performed automatically to disinfect surfaces, liquids, air and rooms, in addition to being very beneficial in terms of energy. Another advantage is not to change the taste of the food.The ultraviolet ray (UV) is divided into 4 parts: The most well-known ultraviolet bands are UVC, UVB and UVA, the fourth, not yet well known, is UVV, this is not generally applied for disinfection purposes, as it is strongly absorbed by the air. Among the last three best known, UVC has the best antimicrobial and antiviral properties. "UVA and UVB rays, present and abundant in sunlight, were also studied for their effect of disinfection and inactivation of coronavirus and both methods of irradiation demonstrated a reduction of the virus, although apparently much less effective than that achieved with irradiation of UVC ", explains Dr.ª Valéria Campos, dermatologist specialized in photomedicine.  Theory Behin the UV Light To kill the virus in closed spaces, we need a lamp of at least 1.5W per square meter. If left for at least half an hour, it will kill all viruses within a meter of you.  Specifically, if the temperature is less than 20 C or greater than 40 C or the relative humidity is greater than 60% we should keep the lamp on for longer. Although UV is effective in killing the virus indoors, UV lamps should not be used to sterilize hands or other areas of skin, as the radiation can cause skin irritation.
Draw the circuit
In the Scheme we need an Arduino Nano (any Arduino is fine), a DHT11 temperature and humidity sensor, a buzzer, a relay, a diode, two terminal blocks and a power supply to power Arduino, transforming the 220Vac into 12vdc.

You can try to PCB PCB
We arrange the components so that they take up as little space as possible in the PCB and order it.

ID Name Designator Footprint

1 DHT11 U2 DHT11 1

2 EK500A-02P CN1, CN2 EK500A-02P 2

3 12*12*7.3 KEY1, KEY2 KEY-SMD_4P-L12.0-W12.0-P5.00-LS15.1 2

4 ARDUINO_NANO2 MODUL1 ARDUINO_NANO2 1

5 10K R1 RES-TH_BD3.3-L9.0-P13.00-D0.6 1

6 1G7 D1 R-1_BD2.5-L3.2-P7.20-D0.6-RD 1

7 SFN-1207PA7.6 BUZZER1 BUZ-TH_BD12.6-P7.50-D0.9 1

8 AC220S12DC-3W_C348883 U1 PWRM-TH_AC220S12DC 1

9 1461868-8 K1 RELAY-TH_1461868-8 
Code
Next you will need to upload the code to arduino. With the start button we start the cycle and arduino will keep the lamp on for half an hour if the temperature and humidity is optimal, otherwise for a whole hour.

pressing stop returns to the initial condition........
