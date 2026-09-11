import pyttsx3
import time

engine = pyttsx3.init()
engine.say("one two three four five six seven eight nine ten")
engine.runAndWait()

# Add a short delay to ensure audio finishes playing
time.sleep(1)