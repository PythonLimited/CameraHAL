class QCamera2Factory
{
    int32_t QCamera2Factory(void){
		// int32_t _ZN7qcamera15QCamera2FactoryD2Ev(void)	
		return 1;
    }

    int32_t QCamera2Factory(void){
		// int32_t _ZN7qcamera15QCamera2FactoryD0Ev(int32_t a1)
		return 1;
    }
	
	int32_t QCamera2Factory(void){
		// int32_t _ZN7qcamera15QCamera2FactoryC2Ev(int32_t * a1)
		return 1;
	}
	
	int32_t get_number_of_cameras(void){
		// int32_t _ZN7qcamera15QCamera2Factory21get_number_of_camerasEv(void)
		return 1;
	}
	
	int32_t getNumberOfCameras(int32_t a1){
		// int32_t _ZN7qcamera15QCamera2Factory18getNumberOfCamerasEv(int32_t a1)
		return 1;
	}
	
	int32_t getCameraInfo(int, camera_info *){
		// int32_t _ZN7qcamera15QCamera2Factory13getCameraInfoEiP11camera_info(int32_t a1, int32_t a2, int32_t a3)
		return 1;
	}
	
	int32_t get_camera_info(int, camera_info *){
		// int32_t _ZN7qcamera15QCamera2Factory15get_camera_infoEiP11camera_info(int32_t a1, int32_t a2) {
	}
	
	int32_t cameraDeviceOpen(int, hw_device_t * *){
		// int32_t _ZN7qcamera15QCamera2Factory16cameraDeviceOpenEiPP11hw_device_t(int32_t a1, int32_t a2, int32_t a3)
		return 1;
	}
	
	int32_t camera_device_open(hw_module_t const *, char const *, hw_device_t * *){
		// int32_t _ZN7qcamera15QCamera2Factory18camera_device_openEPK11hw_module_tPKcPP11hw_device_t(void)
		return 1;
	}
};
