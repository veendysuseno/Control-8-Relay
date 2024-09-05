//  Control-8-Relay
#define RL1 2
#define RL2 3
#define RL3 4
#define RL4 5
#define RL5 6
#define RL6 7
#define RL7 8
#define RL8 9
byte in_serial,str;

void setup(){
  pinMode(2,OUTPUT); pinMode(3,OUTPUT);
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  pinMode(6,OUTPUT); pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); pinMode(9,OUTPUT);
  
  Serial.begin(9600); 
  Serial.println("Kontrol Relay via PC");
  
}
void loop(){ 
   in_serial=Serial.read(); //masih kode ASCII
   str=char(in_serial); //ngerubah ke string
  switch(str){
     case '1': //Relay 1 ON
              digitalWrite(RL1,1);  
     case '2': //Relay 2 ON
              digitalWrite(RL2,1); 
     case '3': //Relay 3 ON
              digitalWrite(RL3,1);  
     case '4': //Relay 4 ON
              digitalWrite(RL4,1); 
     case '5': //Relay 5 ON
              digitalWrite(RL5,1); 
     case '6': //Relay 6 ON
              digitalWrite(RL6,1);
     case '7': //Relay 7 ON
              digitalWrite(RL7,1); 
     case '8': //Relay 8 ON
              digitalWrite(RL8,1); 
     case 'a': //Relay 1 OFF
              digitalWrite(RL1,0); 
     case 'b': //Relay 1 OFF
              digitalWrite(RL2,0); 
     case 'c': //Relay 1 OFF
              digitalWrite(RL3,0); 
     case 'd': //Relay 1 OFF
              digitalWrite(RL4,0);  
     case 'e': //Relay 1 OFF
              digitalWrite(RL5,0); 
     case 'f': //Relay 1 OFF
              digitalWrite(RL6,0); 
     case 'g': //Relay 1 OFF
              digitalWrite(RL7,0); 
     case 'h': //Relay 1 OFF
              digitalWrite(RL8,0); 
  }
}

