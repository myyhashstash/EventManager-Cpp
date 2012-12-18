//
//  EventManager.cpp
//  EventManager
//
//  Created by Mayank Saini on 15/12/12.
//  Copyright (c) 2012 Hashstash Studios. All rights reserved.
//

#include "EventManager.h"

namespace Mage {
#define TEMPLATE template <typename Class> 
    /*TEMPLATE EventHandler<Class>::EventHandler(Class *obj, _fptr func) {
     object = obj;
     function = func;
     }
     
     TEMPLATE void EventHandler<Class>::execute() {
     (object->*function)();
     }
     
     TEMPLATE void Event::addListener(Class *obj, void(Class::*func)(void)){
     handlers[count] = new EventHandler<Class>(obj, func);
     count++;
     }
     
     void Event::execute() {
     for (EventHandlerMap::iterator it = handlers.begin(); it != handlers.end(); ++it) {
     it->second->execute();
     }
     }
     
     EventManager::EventManager() {
     
     }
     
     EventManager* EventManager::Instance()  {
     if (!_Instance) {
     _Instance = new EventManager();
     }
     return _Instance;
     }
     
     void EventManager::createEvent(string name) {
     EventType e;
     e.event = new Event();
     e.name = name;
     _events.push_back(e);
     }
     
     TEMPLATE bool EventManager::subscribe(string name, Class *obj, void (Class::*func)(void)) {
     for (vector<EventType>::iterator it = _events.begin(); it != _events.end(); ++it) {
     EventType e = *it;
     if (e.name.compare(name) == 0) {
     e.event->addListener(obj, func);
     return true;
     }
     }
     return false;
     }
     
     void EventManager::execute(string name) {
     for (vector<EventType>::iterator it = _events.begin(); it != _events.end(); ++it) {
     EventType e = *it;
     if (e.name.compare(name) == 0) {
     e.event->execute();
     }
     }
     }*/
    
    
    EventManager* EventManager::_Instance;
}
