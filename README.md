# МИНУС НА ПИН ARDUINO
Можно ли подать минус а не плюс на пин ардуино? 
Этот вопрос я разбираю, поскоьльку для реализации моей идеи мне понадобилось отображать 
два разных цвета на одном светодиоде.
А в наличии у меня оказались светодиоды оставшиеся от светодиодного RGB куба 
Ссылку на него дам если заинтересуетесь в описании (https://youtu.be/5_F8V82O604) 
светодиоды с общим анодом.
Вот такие аналогичные я нашел на AliExpress.  
На самую длинную ножку здесь подают общий "+"
На остальные в зависимости от нужного цвета подают "-"
Подключаем по схеме через резистор.
Для проверки небольшой скетч.
Подаем соответственно на пин Arduino 0 или 1.
Подача 0 на пин подключает этот пин к земле, а 1 - 5 вольт.
В случае если подаем "-" на две ножки, то получаем смешанные цвета

Схема подключения:
![Схема подключения](https://github.com/dbprof/rgbled-connect/blob/master/3colourled.png)

Видео показ работы:
[![Видео](https://github.com/dbprof/rgbled-connect/blob/master/video.png)](https://youtu.be/LrNvRMEFhTk)
