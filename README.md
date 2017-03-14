AM2320 Software I2C
==========================

# Introduction

The main goal of this library is to use multiple AM2320 with the same microcontroller. Because of I2C protocol you can not use multiple AM2320 in the same bus. Each AM2320 has an I2C address (0x5C) in the same I2C bus you can not use two devices with the same address

To avoid this, if have modified the original [AM2320 arduino library] (https://github.com/Ten04031977) to use software I2C instead of hardware I2C built in the microcontroller. So, you can define as much software I2C buses as you need.



# Links

[Original AM2320 libraryi by StanKaravelikov] (https://github.com/Ten04031977)
[Instructables from StanKaravelikov] (http://www.instructables.com/id/Connecting-AM2320-With-Arduino/?ALLSTEPS)
