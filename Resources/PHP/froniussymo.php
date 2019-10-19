<!DOCTYPE html>
<html>
        <head>
                <title>
                        Data from Fronius Symo
                </title>
        </head>
        <body>
<?php

        // The IP adress from your Fronius Symo
        $ip = '192.168.178.10';

        // Read the data from the API 
        $datafromfile = file_get_contents("http://$ip/solar_api/v1/GetPowerFlowRealtimeData.fcgi");

        // Decode json Data to Array
        $data = json_decode($datafromfile,true);

        echo "Data from SYMO<br>";
        echo "P-Grid: ".round($data["Body"]["Data"]["Site"]["P_Grid"],1)." W<br>";
        echo "P-Load: ".round($data["Body"]["Data"]["Site"]["P_Load"],1)." W<br>";
        echo "P-Akku: ".round($data["Body"]["Data"]["Site"]["P_Akku"],1)." W<br>";
        echo "P-PV: ".round($data["Body"]["Data"]["Site"]["P_PV"],1)." W<br>";
        echo "P: ".round($data["Body"]["Data"]["Inverters"]["1"]["P"],1)." W<br>";
        echo "rel. SelfConsumption: ".round($data["Body"]["Data"]["Site"]["rel_SelfConsumption"],1)." %<br>";
        echo "rel. Autonomy: ".round($data["Body"]["Data"]["Site"]["rel_Autonomy"],1)." %<br>";
        echo "E-Day: ".round($data["Body"]["Data"]["Site"]["E_Day"]/1000,1)." kWh<br>";
        echo "E-Year: ".round($data["Body"]["Data"]["Site"]["E_Year"]/1000,1)." kWh<br>";
        echo "E-Total: ".round($data["Body"]["Data"]["Site"]["E_Total"]/1000,1)." kWh<br>";
?>
        </body>
</html>
