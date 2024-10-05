public class Main {

    public static void main(String[] args) {
        // Record the start time
        long startTime = System.currentTimeMillis();

        // Creating thread one that counts up
        Thread countUpThread = new Thread(new CountUp());
        // Creating thread two that counts down
        Thread countDownThread = new Thread(new CountDown());

        // Start the first thread to count up
        countUpThread.start();

        // Wait for the first thread to finish counting up to 20
        try {
            countUpThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Start the second thread to count down after the first is done
        countDownThread.start();

        // Wait for the second thread to finish counting down to 0
        try {
            countDownThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        long endTime = System.currentTimeMillis();
        long elapsedTime = endTime - startTime;
        long minutes = (elapsedTime / 1000) / 60;
        long seconds = (elapsedTime / 1000) % 60;
        long milliseconds = elapsedTime % 1000;

        // Print the formatted time
        System.out.println(String.format("Total time taken: %02d:%02d:%03d (min:sec:millisec)", minutes, seconds, milliseconds));
    }
}

// Class that implements Runnable for counting up to 20
class CountUp implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i <= 20; i++) {
            System.out.println("Counting Up: " + i);
            try {
                Thread.sleep(500); // Simulate some delay
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

// Class that implements Runnable for counting down from 20 to 0
class CountDown implements Runnable {
    @Override
    public void run() {
        for (int i = 20; i >= 0; i--) {
            System.out.println("Counting Down: " + i);
            try {
                Thread.sleep(500); // Simulate some delay
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
