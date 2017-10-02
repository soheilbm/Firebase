//
//  ViewController.swift
//  iOS Example
//
//  Created by Soheil B.Marvasti on Sep 27, 2016.
//  Copyright © 2016 soheilbm. All rights reserved.
//

import UIKit

import Firebase

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        FirebaseApp.debugDescription()
        Analytics.logEvent(AnalyticsEventSelectContent, parameters: [
            AnalyticsParameterContentType:"cont" as NSObject,
            AnalyticsParameterItemID:"1" as NSObject
            ])
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

