#!/usr/bin/env python
"""
Small event-driven init.

Also, concept:
    It'll work like PKGBUILD: checking and resolving dependencies,
    get config files, and build everything up.
"""

import os

### how to call emerge in terminal
## sending str ("emerge dwm") to terminal
# os.system("emerge dwm")
##

class Event(object):
    """Event class
    """
    def __init__(self):
        super(Event, self).__init__()
        self.handlers = []

    def add(self, handler):
        self.handlers.append(handler)
        return self

    def remove(self, handler):
        self.handlers.remove(handler)
        return self

    def fire(self, sender, earg):
        for handler in self.handlers:
            handler(sender, earg)

    def clearHandlers(self, obj):
        for theHandler in self.__handlers:
            if theHandler.im_self == obj:
                self -= theHandler

    # this allows you to write `a += handler`,
    # `a -= handler`, `a(earg)` instead of e.add(handler)
    # e.remove(handler) and e.send(earg)
    __iadd__ = add
    __isub__ = remove
    __call__ = fire

class Emerge(object):
    """docstring for Emerge"""
    def __init__(self):
        super(Emerge, self).__init__()
        self.evt_emerge = event.Event()

    def emerge(self):
        self.evt_emerge(self)
        os.system("emerge")

def handle_emerge(sender, earg):
    print('[+] Emerge_Event: Initialization.')

####################################################################
# exec

emrg = Emerge()
emrg.evt_emerge += handle_emerge
pub.emerge()
