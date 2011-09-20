//
//  ARViewController.h
//  CoreARSample
//
//  Created by sonson on 11/09/18.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import "CameraViewController.h"

@interface ARViewController : CameraViewController {
	unsigned char *chaincodeBuff;
	unsigned char *cgimageBuff;
	IBOutlet UIImageView	*imageView;
	IBOutlet UIImageView	*cameraView;
}

@end