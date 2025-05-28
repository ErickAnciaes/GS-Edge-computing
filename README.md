## 🌊🚨 Checkpoint 2: Monitoramento de Nível de Rio 

Bem-vindo ao repositório da nossa solução da Global Solution, um sistema de monitoramento inteligente de enchentes desenvolvido com Arduino. Este sistema visa prevenir desastres naturais causados por inundações, emitindo alertas visuais, sonoros e informativos com base no nível da água medido em tempo real.

## 🎯 Objetivo do Projeto
Desenvolver uma solução automatizada capaz de medir a distância entre o sensor e a superfície do rio, alertando sobre níveis críticos de cheia por meio de LEDs, buzzer e mensagens em um display LCD.

## 🧭 Estrutura do Projeto
Este sistema utiliza sensores e atuadores conectados a um Arduino Uno, com as seguintes funcionalidades:

🔹 Sensor ultrassônico (HC-SR04): Mede a distância até a superfície da água.
🔹 Display LCD 16x2: Mostra a distância e o status atual do nível da água.
🔹 LED: Alerta visual quando o nível está alto ou em risco.
🔹 Buzzer: Alerta sonoro ativado em caso de risco iminente.


## 🚦 Regras de Funcionamento
📏 Distância até a água:

🔴 Menor que 20 cm: LCD mostra "RISCO ENCHENTE", LED aceso e buzzer ativado.

🟠 Entre 20 cm e 40 cm: LCD mostra "Nível ALTO", LED aceso, buzzer desligado.

🟢 Maior que 40 cm: LCD mostra "Nível OK", LED e buzzer desligados.

📢 Atualizações a cada 1 segundo, com leitura contínua.

## 🧪 Simulação do Projeto
📍 Acesse a simulação no Tinkercad: https://www.tinkercad.com/things/38XcphVOBZS-global-solution-edge


## 🧰 Tecnologias e Componentes Utilizados
Arduino Uno

Sensor Ultrassônico HC-SR04

Display LCD 16x2

LED

Buzzer

Jumpers e Protoboard

IDE Arduino

Tinkercad para simulação

## 📽️ Apresentação em Vídeo
🎥 Link para vídeo explicativo com funcionamento e demonstração do projeto:https://l1nq.com/linkGsEdgeComputing

## 📸 Imagem do Projeto
![Captura de Tela (22)](https://github.com/user-attachments/assets/fd1f7e6c-1860-4172-bab3-bc2f1d0229de)



## 👨‍💻 Autores
Erick Munhoes Anciães RM: 561484

Ben-Hur Iung de Lima Ferreira RM: 561564

João Pedro Mendes de Figueiredo RM 558779

## 👨‍🏫 Professor Responsável
Nome: Lucas D. Augusto
📧 Email: proflucas.augusto@fiap.com.br
