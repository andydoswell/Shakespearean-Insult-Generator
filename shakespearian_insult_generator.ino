/*
  Random Shakespearian Insult Generator.

*/

#include <avr/pgmspace.h>
#include <LiquidCrystal.h>
// load words into program memory
const char lineOne_0[] PROGMEM = "apish";
const char lineOne_1[] PROGMEM = "artless";
const char lineOne_2[] PROGMEM = "slobbery";
const char lineOne_3[] PROGMEM = "beslubbering";
const char lineOne_4[] PROGMEM = "caluminiating";
const char lineOne_5[] PROGMEM = "cautelous";
const char lineOne_6[] PROGMEM = "churlish";
const char lineOne_7[] PROGMEM = "coldblooded";
const char lineOne_8[] PROGMEM = "concupiscible";
const char lineOne_9[] PROGMEM = "covetous";
const char lineOne_10[] PROGMEM = "crudy";
const char lineOne_11[] PROGMEM = "cuckoldly";
const char lineOne_12[] PROGMEM = "ceceptious";
const char lineOne_13[] PROGMEM = "degenerate";
const char lineOne_14[] PROGMEM = "facinerious";
const char lineOne_15[] PROGMEM = "fawning";
const char lineOne_16[] PROGMEM = "finical";
const char lineOne_17[] PROGMEM = "fusty";
const char lineOne_18[] PROGMEM = "goatish";
const char lineOne_19[] PROGMEM = "gorbellied";
const char lineOne_20[] PROGMEM = "greasy";
const char lineOne_21[] PROGMEM = "heinous";
const char lineOne_22[] PROGMEM = "incontinent";
const char lineOne_23[] PROGMEM = "inexecrable";
const char lineOne_24[] PROGMEM = "insolent";
const char lineOne_25[] PROGMEM = "lecherous";
const char lineOne_26[] PROGMEM = "lisping";
const char lineOne_27[] PROGMEM = "loathly";
const char lineOne_28[] PROGMEM = "lubberly";
const char lineOne_29[] PROGMEM = "lumpish";
const char lineOne_30[] PROGMEM = "lammering";
const char lineOne_31[] PROGMEM = "lusty";
const char lineOne_32[] PROGMEM = "laughty";
const char lineOne_33[] PROGMEM = "obscene";
const char lineOne_34[] PROGMEM = "overgorged";
const char lineOne_35[] PROGMEM = "panderly";
const char lineOne_36[] PROGMEM = "pestiferous";
const char lineOne_37[] PROGMEM = "plumpy";
const char lineOne_38[] PROGMEM = "puking";
const char lineOne_39[] PROGMEM = "rascally";
const char lineOne_40[] PROGMEM = "reeky";
const char lineOne_41[] PROGMEM = "sanctimonious";
const char lineOne_42[] PROGMEM = "sickly";
const char lineOne_43[] PROGMEM = "sneaping";
const char lineOne_44[] PROGMEM = "spongy";
const char lineOne_45[] PROGMEM = "stinking";
const char lineOne_46[] PROGMEM = "superserviceable";
const char lineOne_47[] PROGMEM = "thrasonical";
const char lineOne_48[] PROGMEM = "unhandsome";
const char lineOne_49[] PROGMEM = "unwiped";
const char lineOne_50[] PROGMEM = "viperous";
const char lineOne_51[] PROGMEM = "wanton";
const char lineOne_52[] PROGMEM = "warped";
const char lineOne_53[] PROGMEM = "witless";
const char lineTwo0[] PROGMEM = "bald-pated";
const char lineTwo1[] PROGMEM = "barren-spirited";
const char lineTwo2[] PROGMEM = "beast-eating";
const char lineTwo3[] PROGMEM = "beef-witted";
const char lineTwo4[] PROGMEM = "boiled-brains";
const char lineTwo5[] PROGMEM = "clay-brained";
const char lineTwo6[] PROGMEM = "dirt-rotten";
const char lineTwo7[] PROGMEM = "dizzy-eyed";
const char lineTwo8[] PROGMEM = "dull-brained";
const char lineTwo9[] PROGMEM = "eye-offending";
const char lineTwo10[] PROGMEM = "fat-kidneyed";
const char lineTwo11[] PROGMEM = "flap-eared";
const char lineTwo12[] PROGMEM = "foul-mouthed";
const char lineTwo13[] PROGMEM = "half-blooded";
const char lineTwo14[] PROGMEM = "hard-haired";
const char lineTwo15[] PROGMEM = "hell-governed";
const char lineTwo16[] PROGMEM = "hollow-eyed";
const char lineTwo17[] PROGMEM = "hook-nosed";
const char lineTwo18[] PROGMEM = "ill-tempered";
const char lineTwo19[] PROGMEM = "knotty-pated";
const char lineTwo20[] PROGMEM = "leaden-footed";
const char lineTwo21[] PROGMEM = "leptus-leering";
const char lineTwo22[] PROGMEM = "lily-livered";
const char lineTwo23[] PROGMEM = "logger-headed";
const char lineTwo24[] PROGMEM = "lust-breathed";
const char lineTwo25[] PROGMEM = "motley-minded";
const char lineTwo26[] PROGMEM = "mouse-eaten";
const char lineTwo27[] PROGMEM = "muddly mettled";
const char lineTwo28[] PROGMEM = "nook-shotten";
const char lineTwo29[] PROGMEM = "one-trunk-inheriting";
const char lineTwo30[] PROGMEM = "pale-hearted";
const char lineTwo31[] PROGMEM = "pigeon-livered";
const char lineTwo32[] PROGMEM = "puke-stocking";
const char lineTwo33[] PROGMEM = "puppy-headed";
const char lineTwo34[] PROGMEM = "rank-scented";
const char lineTwo35[] PROGMEM = "rug-headed";
const char lineTwo36[] PROGMEM = "rump-fed";
const char lineTwo37[] PROGMEM = "self-glorious";
const char lineTwo38[] PROGMEM = "senseless-obstinate";
const char lineTwo39[] PROGMEM = "sheep-biting";
const char lineTwo40[] PROGMEM = "shrill-tongued";
const char lineTwo41[] PROGMEM = "snail-paced";
const char lineTwo42[] PROGMEM = "sodden-witted";
const char lineTwo43[] PROGMEM = "stretch-mouthed";
const char lineTwo44[] PROGMEM = "stubborn-hard";
const char lineTwo45[] PROGMEM = "swag-bellied";
const char lineTwo46[] PROGMEM = "tardy-gaited";
const char lineTwo47[] PROGMEM = "thick-eyed";
const char lineTwo48[] PROGMEM = "three-suited";
const char lineTwo49[] PROGMEM = "tripe-visaged";
const char lineTwo50[] PROGMEM = "under-honest";
const char lineTwo51[] PROGMEM = "uneducated";
const char lineTwo52[] PROGMEM = "useless";
const char lineTwo53[] PROGMEM = "white-livered";
const char lineThree0[] PROGMEM = "abomination";
const char lineThree1[] PROGMEM = "arch-villain";
const char lineThree2[] PROGMEM = "baggage";
const char lineThree3[] PROGMEM = "bed-presser";
const char lineThree4[] PROGMEM = "blockhead";
const char lineThree5[] PROGMEM = "braggart";
const char lineThree6[] PROGMEM = "bugbear";
const char lineThree7[] PROGMEM = "bull's pizzle";
const char lineThree8[] PROGMEM = "codpiece";
const char lineThree9[] PROGMEM = "capocchia";
const char lineThree10[] PROGMEM = "cornuto";
const char lineThree11[] PROGMEM = "costermonger";
const char lineThree12[] PROGMEM = "cot-quean";
const char lineThree13[] PROGMEM = "coxcomb";
const char lineThree14[] PROGMEM = "cozener";
const char lineThree15[] PROGMEM = "dissembler";
const char lineThree16[] PROGMEM = "dullard";
const char lineThree17[] PROGMEM = "dunghill";
const char lineThree18[] PROGMEM = "fashion-monger";
const char lineThree19[] PROGMEM = "fleshmonger";
const char lineThree20[] PROGMEM = "foot-licker";
const char lineThree21[] PROGMEM = "fustilarian";
const char lineThree22[] PROGMEM = "geck";
const char lineThree23[] PROGMEM = "giglet";
const char lineThree24[] PROGMEM = "horn-beast";
const char lineThree25[] PROGMEM = "horse-back-breaker";
const char lineThree26[] PROGMEM = "idiot-worshipper";
const char lineThree27[] PROGMEM = "jack-a-nape";
const char lineThree28[] PROGMEM = "lewdster";
const char lineThree29[] PROGMEM = "malignancy";
const char lineThree30[] PROGMEM = "malmsey-butt";
const char lineThree31[] PROGMEM = "measle";
const char lineThree32[] PROGMEM = "miscreant";
const char lineThree33[] PROGMEM = "mushrump";
const char lineThree34[] PROGMEM = "ox-head";
const char lineThree35[] PROGMEM = "parasite";
const char lineThree36[] PROGMEM = "pig-nut";
const char lineThree37[] PROGMEM = "pin-buttock";
const char lineThree38[] PROGMEM = "potato finger";
const char lineThree39[] PROGMEM = "princox";
const char lineThree40[] PROGMEM = "purpose-changer";
const char lineThree41[] PROGMEM = "quatch-buttock";
const char lineThree42[] PROGMEM = "rabbit-sucker";
const char lineThree43[] PROGMEM = "rampallian";
const char lineThree44[] PROGMEM = "rat-catcher";
const char lineThree45[] PROGMEM = "ratsbane";
const char lineThree46[] PROGMEM = "renegatho";
const char lineThree47[] PROGMEM = "scum";
const char lineThree48[] PROGMEM = "scut";
const char lineThree49[] PROGMEM = "starve-lackey";
const char lineThree50[] PROGMEM = "stock-fish";
const char lineThree51[] PROGMEM = "ticklebrain";
const char lineThree52[] PROGMEM = "under-skinker";
const char lineThree53[] PROGMEM = "villiago";
// create tables
const char* const lineOne_table[] PROGMEM = {
  lineOne_0, lineOne_1, lineOne_2, lineOne_3, lineOne_4, lineOne_5, lineOne_6, lineOne_7, lineOne_8, lineOne_9, lineOne_10, lineOne_11, lineOne_12, lineOne_13, lineOne_14, lineOne_15, lineOne_16, lineOne_17, lineOne_18, lineOne_19, lineOne_20, lineOne_21, lineOne_22, lineOne_23, lineOne_24, lineOne_25, lineOne_26, lineOne_27, lineOne_28, lineOne_29, lineOne_30, lineOne_31, lineOne_31, lineOne_33, lineOne_34, lineOne_35, lineOne_36, lineOne_37, lineOne_38, lineOne_39, lineOne_40, lineOne_41, lineOne_42, lineOne_43, lineOne_44, lineOne_45, lineOne_46, lineOne_47, lineOne_48, lineOne_49, lineOne_50, lineOne_51, lineOne_52, lineOne_53
};
const char* const lineTwo_table[] PROGMEM = {
  lineTwo0, lineTwo1, lineTwo2, lineTwo3, lineTwo4, lineTwo5, lineTwo6, lineTwo7, lineTwo8, lineTwo9, lineTwo10, lineTwo11, lineTwo12, lineTwo13, lineTwo14, lineTwo15, lineTwo16, lineTwo17, lineTwo18, lineTwo19, lineTwo20, lineTwo21, lineTwo22, lineTwo23, lineTwo24, lineTwo25, lineTwo26, lineTwo27, lineTwo28, lineTwo29, lineTwo30, lineTwo31, lineTwo31, lineTwo33, lineTwo34, lineTwo35, lineTwo36, lineTwo37, lineTwo38, lineTwo39, lineTwo40, lineTwo41, lineTwo42, lineTwo43, lineTwo44, lineTwo45, lineTwo46, lineTwo47, lineTwo48, lineTwo49, lineTwo50, lineTwo51, lineTwo52, lineTwo53
};
const char* const lineThree_table[] PROGMEM = {
  lineThree0, lineThree1, lineThree2, lineThree3, lineThree4, lineThree5, lineThree6, lineThree7, lineThree8, lineThree9, lineThree10, lineThree11, lineThree12, lineThree13, lineThree14, lineThree15, lineThree16, lineThree17, lineThree18, lineThree19, lineThree20, lineThree21, lineThree22, lineThree23, lineThree24, lineThree25, lineThree26, lineThree27, lineThree28, lineThree29, lineThree30, lineThree31, lineThree31, lineThree33, lineThree34, lineThree35, lineThree36, lineThree37, lineThree38, lineThree39, lineThree40, lineThree41, lineThree42, lineThree43, lineThree44, lineThree45, lineThree46, lineThree47, lineThree48, lineThree49, lineThree50, lineThree51, lineThree52, lineThree53
};
char buffer[30];

int rand1; // hold random numbers
int rand2;
int rand3;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  lcd.begin (16, 2); // initialise LCD
  lcd.clear (); // Clear and print(F splash screen
  randomSeed(analogRead(0)); // seed random number generator with noise from analogue input 0
  rand1 = random (0, 53); // generate some random numbers
  rand2 = random (0, 53);
  rand3 = random (0, 53);
  lcd.clear (); // set up the display
  lcd.setCursor (0, 0);
  lcd.print(F("Thou")); 
  lcd.setCursor (0, 1);
  strcpy_P(buffer, (char*)pgm_read_word(&(lineOne_table[rand1]))); //Get and reconstruct 1st string from PROGMEM
  lcd.print(buffer); // print it
  delay (2000); // wait a bit
  lcd.clear (); // do it again
  lcd.setCursor (0, 0);
  strcpy_P(buffer, (char*)pgm_read_word(&(lineTwo_table[rand2])));//Get and reconstruct 2nd string from PROGMEM
  lcd.print(buffer);
  lcd.setCursor (0, 1);
  strcpy_P(buffer, (char*)pgm_read_word(&(lineThree_table[rand3])));//Get and reconstruct 3rd string from PROGMEM
  lcd.print(buffer);
}
void loop() {



}





