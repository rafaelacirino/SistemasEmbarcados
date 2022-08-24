![logo IFPB](https://github.com/rafaelacirino/prototipagem/blob/main/logo_campus.png)<br>
<h6>INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA DA PARAÍBA</h6>
<h6>BACHARELADO EM ENGENHARIA DA COMPUTAÇÃO</h6>
<h6>DISCIPLINA: SISTEMA EMBARCADOS</h6>
<h6>DOCENTE: ALEXANDRE SALES VASCONCELOS</h6>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<p>ALEXANDRE DOS SANTOS OLIVEIRA</p>
<p>MOZART LIMA DO NASCIMENTO</p>
<p>RAFAELA BORBA FALCÃO CIRINO</p>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<p><b>DESENVOLVIMENTO DE SISTEMA DE AUTOMAÇÃO HIDROPONIA 3</b></p>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<p><b>Introdução</b></p>
<br>
<p>O controle de temperatura de umidade em um ambiente pode ser operado através de expansão indireta, que pode ser, por exemplo, uma central de água que trabalha com temperatura controlada por um chiller e bombeada para diversos equipamentos, atendendo com isso, dezenas de metros quadrados. O controle de umidade em ambientes climatizados por meio de um sensor, permite que se envie sinal de abertura ou fechamento de entrada de água, podendo esse sinal ser proporcional on/off.</p>
<br>
<p></p>
<br>
<p><b>Objetivos Gerais e Específicos</b></p>
<br>
<p>Este trabalho tem como objetivo automatizar o controle de umidade no ambiente com o auxílio de microcontrolador ESP32 wifi.</p>
<p>A partir desse objetivo, foi possível elencar outros mais específicos, como:
<ul>
  <li>programar o ESP32 wifi para que mantenha os níveis ideais de umidade no ambiente antravés da coleta pelos sensores;</li>
  <li>possibilitar que o microcontrolador mantenha os níveis ideais de condutividade elétrica para que seja realizada a cultura, através de leitura dos dados coletados;</li>
  <li>monitorar a umidade do ambiente a fim de analisar resultados.</li>
</ul></p>
<p>Dessa forma, além de acompanhar os dados, foi passível levantar dados sobre a umidade do ambiente analisado. O diferencial encontra-se na utilização do sensor para realizar a verificação da temperatura do ambiente como também, a umidade.</p>
<br>
<p><b>Materiais e Métodos</b></p>
<br>
<p>Para elaboração deste projeto, foi utilizado o Eclipse para codificação do projeto, e utilizamos também:
<ul>
  <li>Microcontrolador ESP32 Wifi;</li>
  <li>Sensor DHT11 de umidade e temperatura com módulo;</li>
  <li>Sensor ultrassônico HC-SR04;</li>
  <li>LEDs para identificação de status;</li>
  <li>Buzzer;</li>
  <li>Servo Motor Micro 9G - SG90</li>
</ul>
<p>Foram utilizadas as seguines bibliotecas:</p>
<ul>
  <li>freertos/FreeRTOS.h</li>
  <li>freertos/event_groups.h</li>
  <li>freertos/task.h</li>
  <li>esp_err.h</li>
  <li>esp_log.h</li>
  <li>esp_wifi.h</li>
  <li>esp_system.h.h</li>
  <li>driver/gpio.h</li>
  <li>lwip/netdb.h</li>
  <li>dht.h</li>
  <li>stdbool.h</li>
  <li>nvs_flash.h</li>
</ul>
<p>Datasheets dos componentes utilizados: <a href="https://github.com/rafaelacirino/SistemasEmbarcados/tree/master/Datasheets"> aqui</a>.</p>
<br>
<p><b>Resultados</b></p>
<br>
<p>Neste projeto foi possível a elaboração de um protótipo com a funçãod e realizar o controle de temperatura e umidade em um ambiente, além disso, o sistema dispara alertas para umidades abaixo das permitidas ou temperaturas fora do range estabelecido. Para isso, foi instalado um buzzer e sensores de monitoramento e o uso do wifi para conexão e troca de informações.</p>
<br>
<p>Relatório do projeto em pdf: <a href="https://github.com/rafaelacirino/SistemasEmbarcados/blob/master/Relat%C3%B3rio/Relat%C3%B3rio.pdf"> aqui</a>.</p>
<br>
<p>Diagrama de blocos: <a href="https://github.com/rafaelacirino/SistemasEmbarcados/blob/master/Diagrama%20de%20Blocos/Diagrama%20Proj%20Sist_Emb.pdf"> aqui</a>.</p>
<br>
<p>Circuito elétrico e esquema elétrico: <a href="https://github.com/rafaelacirino/SistemasEmbarcados/tree/master/Circuito%20El%C3%A9trico"> aqui</a>.</p>
<br>
<p>Fluxograma do projeto: <a href="https://github.com/rafaelacirino/SistemasEmbarcados/blob/master/Diagrama%20de%20Blocos/Diagrama%20Proj%20Sist_Emb.pdf"> aqui</a>.</p>
<br>
<p><b>Conclusão</b></p>
<br>
<p>Controlar a umidade e temperatura de um ambiente mostrou-se relevante tendo em vista que com seu controle pode-se realizar diversas atividades e determinar se está na época ideal de cultivo, por exemplo. Ressalta-se que o controle na qualidade dos ambientes tem sua importância em caracterizar a presença/ausência de vapor d'água no ar seco: a umidade absoluta (w) e a umidade relativa (UR). Em ambientes controlados por este tipo de instalação o controle de temperatura e umidade pode ser desta forma, adequado para seres vivos com o parâmetro que não haja desconforto e risco para saúde.</p>
